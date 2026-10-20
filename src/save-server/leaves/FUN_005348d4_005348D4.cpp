// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005348D4 .. +0x55 bytes.
extern "C" __declspec(naked) void FUN_005348d4_005348D4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4], 0
        ; Exact mapped bytes 75 14: jne 0x5348fb
        __asm _emit 0x75
        __asm _emit 0x14
        push 27ah
        push 636640h
        ; Exact mapped bytes E8 4A 44 FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x44
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5348fb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5348de
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 79 E2 FF FF: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0x79
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 70 E2 FF FF: call 0x532b82
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xe2
        __asm _emit 0xff
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 4]
        push eax
        ; Exact mapped bytes FF 15 84 B4 68 00: call dword ptr [0x68b484]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x84
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
