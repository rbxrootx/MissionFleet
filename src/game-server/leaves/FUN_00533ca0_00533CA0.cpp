// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00533CA0 .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_00533ca0_00533CA0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 41h
        push 5820e8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A6 74 FC FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0x74
        __asm _emit 0xfc
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 5ch]
        mov eax, dword ptr [edx + 14h]
        and eax, 100h
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x533cdd
        __asm _emit 0x75
        __asm _emit 0x11
        push 42h
        push 5820e8h
        ; Exact mapped bytes E8 28 0D 00 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x28
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x533cdd
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x533cba
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 5ch]
        mov eax, dword ptr [eax + 10h]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
