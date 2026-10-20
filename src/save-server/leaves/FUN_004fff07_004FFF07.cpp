// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004FFF07 .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_004fff07_004FFF07() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 60h]
        and ecx, 1
        test ecx, ecx
        ; Exact mapped bytes 74 04: je 0x4fff1f
        __asm _emit 0x74
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 27: jmp 0x4fff46
        __asm _emit 0xeb
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        and eax, 2
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4fff3d
        __asm _emit 0x75
        __asm _emit 0x11
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5A 63 FD FF: call 0x4d628e
        __asm _emit 0xe8
        __asm _emit 0x5a
        __asm _emit 0x63
        __asm _emit 0xfd
        __asm _emit 0xff
        and eax, 10000000h
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x4fff44
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x4fff46
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
