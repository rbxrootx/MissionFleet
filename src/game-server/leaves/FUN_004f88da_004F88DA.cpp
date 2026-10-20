// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F88DA .. +0xCA bytes.
extern "C" __declspec(naked) void FUN_004f88da_004F88DA() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 58: je 0x4f8945
        __asm _emit 0x74
        __asm _emit 0x58
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 10h], 0
        ; Exact mapped bytes 74 05: je 0x4f88fb
        __asm _emit 0x74
        __asm _emit 0x05
        ; Exact mapped bytes E9 A0 00 00 00: jmp 0x4f899b
        __asm _emit 0xe9
        __asm _emit 0xa0
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 8]
        cmp ecx, dword ptr [eax + 20h]
        ; Exact mapped bytes 72 14: jb 0x4f891d
        __asm _emit 0x72
        __asm _emit 0x14
        push 2a2h
        push 5c5b58h
        ; Exact mapped bytes E8 E8 C0 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f891d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D8: jne 0x4f88fb
        __asm _emit 0x75
        __asm _emit 0xd8
        mov eax, dword ptr [ebp + 8]
        neg eax
        sbb eax, eax
        and eax, 8
        or ah, 4
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes E8 BA 28 04 00: call 0x53b1fd
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0x28
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes EB 56: jmp 0x4f899b
        __asm _emit 0xeb
        __asm _emit 0x56
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 0
        ; Exact mapped bytes 75 14: jne 0x4f8962
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a9h
        push 5c5b58h
        ; Exact mapped bytes E8 A3 C0 03 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xa3
        __asm _emit 0xc0
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f8962
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 DD: jne 0x4f8945
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        push 0
        push 87h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 5D 32 04 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x5d
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
        and eax, 2000h
        test eax, eax
        ; Exact mapped bytes 74 16: je 0x4f899b
        __asm _emit 0x74
        __asm _emit 0x16
        push 0
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 0f1h
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 14h]
        ; Exact mapped bytes E8 3E 32 04 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x32
        __asm _emit 0x04
        __asm _emit 0x00
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
