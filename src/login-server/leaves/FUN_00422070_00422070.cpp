// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422070 .. +0xA5 bytes.
extern "C" __declspec(naked) void FUN_00422070_00422070() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43fc00h
        push 423118h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], esp
        mov ebx, dword ptr [ebp + 18h]
        mov dword ptr [ebp - 2ch], ebx
        and dword ptr [ebp - 24h], 0
        mov esi, dword ptr [ebp + 0ch]
        mov eax, dword ptr [esi - 4]
        mov dword ptr [ebp - 28h], eax
        ; Exact mapped bytes E8 15 04 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0x15
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 6ch]
        mov dword ptr [ebp - 1ch], eax
        ; Exact mapped bytes E8 0A 04 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0x0a
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [eax + 70h]
        mov dword ptr [ebp - 20h], eax
        ; Exact mapped bytes E8 FF 03 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0xff
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov edi, dword ptr [ebp + 8]
        mov dword ptr [eax + 6ch], edi
        ; Exact mapped bytes E8 F4 03 00 00: call 0x4224c3
        __asm _emit 0xe8
        __asm _emit 0xf4
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 70h], ecx
        and dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 4], 1
        push dword ptr [ebp + 20h]
        push dword ptr [ebp + 1ch]
        push ebx
        push dword ptr [ebp + 14h]
        push esi
        ; Exact mapped bytes E8 64 C3 FF FF: call 0x41e454
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0xc3
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 14h
        mov dword ptr [ebp - 2ch], eax
        and dword ptr [ebp - 4], 0
        or dword ptr [ebp - 4], 0ffffffffh
        ; Exact mapped bytes E8 3A 00 00 00: call 0x42213d
        __asm _emit 0xe8
        __asm _emit 0x3a
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 2ch]
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        leave
        ret
    }
}
