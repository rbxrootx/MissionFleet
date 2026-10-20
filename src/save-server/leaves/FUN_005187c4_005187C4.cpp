// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005187C4 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_005187c4_005187C4() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1B 66 FB FF: call 0x4cedf1
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x66
        __asm _emit 0xfb
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 5ch], 28h
        ; Exact mapped bytes 74 14: je 0x5187f3
        __asm _emit 0x74
        __asm _emit 0x14
        push 54ah
        push 674cach
        ; Exact mapped bytes E8 52 05 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x52
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x5187f3
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x5187d6
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 60h]
        and eax, 80h
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x51881c
        __asm _emit 0x75
        __asm _emit 0x14
        push 54bh
        push 674cach
        ; Exact mapped bytes E8 29 05 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51881c
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D7: jne 0x5187f9
        __asm _emit 0x75
        __asm _emit 0xd7
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 74h], 4cd820h
        ; Exact mapped bytes 74 14: je 0x518842
        __asm _emit 0x74
        __asm _emit 0x14
        push 54ch
        push 674cach
        ; Exact mapped bytes E8 03 05 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x05
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x518842
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x518822
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        cmp edx, dword ptr [ebp - 4]
        ; Exact mapped bytes 74 14: je 0x518867
        __asm _emit 0x74
        __asm _emit 0x14
        push 54dh
        push 674cach
        ; Exact mapped bytes E8 DE 04 01 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xde
        __asm _emit 0x04
        __asm _emit 0x01
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x518867
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x518848
        __asm _emit 0x75
        __asm _emit 0xdb
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
