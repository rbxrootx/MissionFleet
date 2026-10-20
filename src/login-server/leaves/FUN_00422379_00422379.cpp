// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00422379 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_00422379_00422379() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 43fc28h
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
        push ecx
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], esp
        mov eax, dword ptr [ebp + 8]
        test eax, eax
        ; Exact mapped bytes 74 1B: je 0x4223c0
        __asm _emit 0x74
        __asm _emit 0x1b
        mov ecx, dword ptr [eax + 1ch]
        mov ecx, dword ptr [ecx + 4]
        test ecx, ecx
        ; Exact mapped bytes 74 11: je 0x4223c0
        __asm _emit 0x74
        __asm _emit 0x11
        and dword ptr [ebp - 4], 0
        push ecx
        push dword ptr [eax + 18h]
        ; Exact mapped bytes E8 05 C0 FF FF: call 0x41e3c1
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0xff
        __asm _emit 0xff
        or dword ptr [ebp - 4], 0ffffffffh
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
