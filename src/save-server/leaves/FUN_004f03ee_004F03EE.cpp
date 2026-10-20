// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F03EE .. +0x74 bytes.
extern "C" __declspec(naked) void FUN_004f03ee_004F03EE() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        add ecx, 28h
        ; Exact mapped bytes E8 45 65 03 00: call 0x52694a
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x65
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 52: jne 0x4f045b
        __asm _emit 0x75
        __asm _emit 0x52
        mov ecx, dword ptr [ebp - 8]
        add ecx, 28h
        ; Exact mapped bytes E8 F8 14 FD FF: call 0x4c190c
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x14
        __asm _emit 0xfd
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        push 4bh
        push 678234h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 39 9E FE FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        push 636f20h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 5C 9D FE FF: call 0x4da190
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0x9d
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 11: jne 0x4f0449
        __asm _emit 0x75
        __asm _emit 0x11
        push 4ch
        push 678234h
        ; Exact mapped bytes E8 FC 88 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0x88
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f0449
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D8: jne 0x4f0427
        __asm _emit 0x75
        __asm _emit 0xd8
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], 0
        ; Exact mapped bytes EB 9F: jmp 0x4f03fa
        __asm _emit 0xeb
        __asm _emit 0x9f
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
