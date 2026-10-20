// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050D13A .. +0x7D bytes.
extern "C" __declspec(naked) void FUN_0050d13a_0050D13A() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 343h
        push 5cba5ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 09 E0 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0x09
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 3ch]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 14: je 0x50d176
        __asm _emit 0x74
        __asm _emit 0x14
        push 344h
        push 5cba5ch
        ; Exact mapped bytes E8 8F 78 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50d176
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x50d157
        __asm _emit 0x75
        __asm _emit 0xdb
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        ; Exact mapped bytes E8 9E A8 FD FF: call 0x4e7a2b
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0xa8
        __asm _emit 0xfd
        __asm _emit 0xff
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        ; Exact mapped bytes E8 F8 A6 FD FF: call 0x4e7891
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0xa6
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 3ch], 0
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
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
