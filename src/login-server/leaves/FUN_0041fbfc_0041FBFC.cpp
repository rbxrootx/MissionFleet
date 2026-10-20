// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0041FBFC .. +0x52 bytes.
extern "C" __declspec(naked) void FUN_0041fbfc_0041FBFC() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 20h
        mov eax, dword ptr [ebp + 8]
        push esi
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 20h], eax
        lea eax, [ebp + 10h]
        mov dword ptr [ebp - 14h], 42h
        push eax
        lea eax, [ebp - 20h]
        push dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 1ch], 7fffffffh
        push eax
        ; Exact mapped bytes E8 95 50 00 00: call 0x424cbf
        __asm _emit 0xe8
        __asm _emit 0x95
        __asm _emit 0x50
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        dec dword ptr [ebp - 1ch]
        mov esi, eax
        ; Exact mapped bytes 78 08: js 0x41fc3c
        __asm _emit 0x78
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 20h]
        and byte ptr [eax], 0
        ; Exact mapped bytes EB 0D: jmp 0x41fc49
        __asm _emit 0xeb
        __asm _emit 0x0d
        lea eax, [ebp - 20h]
        push eax
        push 0
        ; Exact mapped bytes E8 60 4F 00 00: call 0x424ba7
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0x4f
        __asm _emit 0x00
        __asm _emit 0x00
        pop ecx
        pop ecx
        mov eax, esi
        pop esi
        leave
        ret
    }
}
