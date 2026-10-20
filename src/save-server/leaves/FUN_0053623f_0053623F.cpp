// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0053623F .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_0053623f_0053623F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 8], 0
        ; Exact mapped bytes 75 14: jne 0x536268
        __asm _emit 0x75
        __asm _emit 0x14
        push 355h
        push 636640h
        ; Exact mapped bytes E8 DD 2A FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xdd
        __asm _emit 0x2a
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x536268
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x53624b
        __asm _emit 0x75
        __asm _emit 0xdd
        push 100h
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 1D 6E F9 FF: call 0x4cd098
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x6e
        __asm _emit 0xf9
        __asm _emit 0xff
        push eax
        push 100h
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 8]
        push eax
        ; Exact mapped bytes FF 15 F0 B4 68 00: call dword ptr [0x68b4f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb4
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push -1
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 38 6F F9 FF: call 0x4cd1d3
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x6f
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
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
