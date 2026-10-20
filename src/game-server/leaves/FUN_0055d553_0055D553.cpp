// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0055D553 .. +0x72 bytes.
extern "C" __declspec(naked) void FUN_0055d553_0055D553() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        push 158h
        push 5cebf0h
        mov eax, dword ptr [ebp - 8]
        push eax
        ; Exact mapped bytes E8 E7 DB F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0xdb
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 DA DF FF FF: call 0x55b55b
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xdf
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x55d599
        __asm _emit 0x75
        __asm _emit 0x14
        push 159h
        push 5cebf0h
        ; Exact mapped bytes E8 6C 74 FD FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x6c
        __asm _emit 0x74
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x55d599
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x55d579
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 8]
        add edx, 0d0h
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 27 03 F9 FF: call 0x4ed8d8
        __asm _emit 0xe8
        __asm _emit 0x27
        __asm _emit 0x03
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        or al, 1
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
