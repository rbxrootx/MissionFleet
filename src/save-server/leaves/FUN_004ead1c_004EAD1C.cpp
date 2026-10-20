// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EAD1C .. +0x53 bytes.
extern "C" __declspec(naked) void FUN_004ead1c_004EAD1C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push -1
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 11 87 FB FF: call 0x4a3442
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0x87
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4ead49
        __asm _emit 0x75
        __asm _emit 0x14
        push 2f5h
        push 674180h
        ; Exact mapped bytes E8 FC DF 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xfc
        __asm _emit 0xdf
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ead49
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x4ead26
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes FF 15 BC B7 68 00: call dword ptr [0x68b7bc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xbc
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 30 F6 FF FF: call 0x4ea396
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
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
