// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050D07C .. +0xBE bytes.
extern "C" __declspec(naked) void FUN_0050d07c_0050D07C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 336h
        push 5cba5ch
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 C7 E0 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0xe0
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        cmp dword ptr [ecx + 3ch], 0
        ; Exact mapped bytes 74 14: je 0x50d0b6
        __asm _emit 0x74
        __asm _emit 0x14
        push 337h
        push 5cba5ch
        ; Exact mapped bytes E8 4F 79 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50d0b6
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x50d099
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        ; Exact mapped bytes E8 5E A9 FD FF: call 0x4e7a2b
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xa9
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x50d0e5
        __asm _emit 0x74
        __asm _emit 0x14
        push 338h
        push 5cba5ch
        ; Exact mapped bytes E8 20 79 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x79
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50d0e5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D1: jne 0x50d0bc
        __asm _emit 0x75
        __asm _emit 0xd1
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        add ecx, 28h
        ; Exact mapped bytes E8 58 A2 FD FF: call 0x4e7352
        __asm _emit 0xe8
        __asm _emit 0x58
        __asm _emit 0xa2
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 3ch], 0
        ; Exact mapped bytes 74 14: je 0x50d117
        __asm _emit 0x74
        __asm _emit 0x14
        push 33bh
        push 5cba5ch
        ; Exact mapped bytes E8 EE 78 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x78
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50d117
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x50d0fa
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 3ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
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
