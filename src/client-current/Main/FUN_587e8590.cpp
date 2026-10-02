// Event target for the current Main.dll 0x80000100 route.
// Ghidra body: 0x587E8590..0x587E8684 (245 bytes), a single contiguous range.
// The routine observes four stack arguments after ECX, copies a nonempty
// payload through 0x5897152E/0x5897CD4C, then advances and conditionally fills
// a 16-byte circular-queue slot. Field names and callback semantics are not
// recovered; offsets and call order below follow the captured instructions.
extern "C" __declspec(naked) void FUN_587e8590() {
    __asm {
        sub esp, 10h
        mov eax, dword ptr [esp + 20h]
        mov edx, dword ptr [esp + 18h]
        push esi
        mov esi, ecx
        cmp dword ptr [esi + 21c38h], 0
        mov ecx, dword ptr [esp + 18h]
        push edi
        // Absolute callback pointer; keep this as a literal mapped operand.
        __asm _emit 0x8b
        __asm _emit 0x3d
        __asm _emit 0xa0
        __asm _emit 0xc1
        __asm _emit 0x98
        __asm _emit 0x58
        mov dword ptr [esp + 8], eax
        mov dword ptr [esp + 0ch], ecx
        mov dword ptr [esp + 10h], edx
        jz hook_complete
        mov edx, dword ptr [esi + 21c3ch]
        inc dword ptr [esi + 21c30h]
        push 0
        lea eax, [esp + 2ch]
        push eax
        push 10h
        lea ecx, [esp + 14h]
        push ecx
        push edx
        call edi

    hook_complete:
        mov eax, dword ptr [esp + 8]
        test eax, eax
        jz empty_payload
        push eax
        // Preserve the direct call target from the captured image.
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x8f
        __asm _emit 0x18
        __asm _emit 0x00
        mov ecx, dword ptr [esp + 0ch]
        mov edx, dword ptr [esp + 28h]
        push ecx
        push edx
        push eax
        mov dword ptr [esp + 24h], eax
        // Preserve the direct copy-helper call target from the capture.
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x47
        __asm _emit 0x19
        __asm _emit 0x00
        add esp, 10h
        cmp dword ptr [esi + 21c38h], 0
        jz payload_complete
        mov ecx, dword ptr [esp + 8]
        mov edx, dword ptr [esp + 14h]
        push 0
        lea eax, [esp + 2ch]
        push eax
        mov eax, dword ptr [esi + 21c3ch]
        push ecx
        push edx
        push eax
        call edi
        jmp payload_complete

    empty_payload:
        mov dword ptr [esp + 14h], 0

    payload_complete:
        mov ecx, dword ptr [esi + 104a4h]
        mov eax, dword ptr [esi + 104ach]
        dec ecx
        cmp eax, ecx
        jnz index_advanced
        xor ecx, ecx
        jmp index_stored

    index_advanced:
        lea ecx, [eax + 1]

    index_stored:
        mov dword ptr [esi + 104ach], ecx
        cmp ecx, dword ptr [esi + 104b0h]
        jz queue_full
        mov edx, dword ptr [esp + 8]
        shl eax, 4
        add eax, dword ptr [esi + 104b4h]
        mov dword ptr [eax], edx
        mov ecx, dword ptr [esp + 0ch]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [esp + 10h]
        mov dword ptr [eax + 8], edx
        mov ecx, dword ptr [esp + 14h]
        mov dword ptr [eax + 0ch], ecx
        inc dword ptr [esi + 104a8h]

    queue_full:
        pop edi
        pop esi
        add esp, 10h
        ret 10h
    }
}
