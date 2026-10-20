// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00509FDD .. +0xF0 bytes.
extern "C" __declspec(naked) void FUN_00509fdd_00509FDD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 60 BD 02 00: call 0x535d51
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 FE 20 03 00: call 0x53c0fb
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x20
        __asm _emit 0x03
        __asm _emit 0x00
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 06: jne 0x50a009
        __asm _emit 0x75
        __asm _emit 0x06
        cmp dword ptr [ebp - 10h], 0
        ; Exact mapped bytes 74 14: je 0x50a01d
        __asm _emit 0x74
        __asm _emit 0x14
        push 210h
        push 5cb450h
        ; Exact mapped bytes E8 E8 A9 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x50a01d
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x509ffd
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], edx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 C2 4D FE FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0xc2
        __asm _emit 0x4d
        __asm _emit 0xfe
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 F7 FE FF FF: call 0x509f42
        __asm _emit 0xe8
        __asm _emit 0xf7
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 74 1C: je 0x50a06f
        __asm _emit 0x74
        __asm _emit 0x1c
        mov edx, dword ptr [ebp - 14h]
        and edx, 200000h
        test edx, edx
        ; Exact mapped bytes 74 0F: je 0x50a06f
        __asm _emit 0x74
        __asm _emit 0x0f
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [edx]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax], ecx
        mov ecx, dword ptr [ebp + 0ch]
        cmp dword ptr [ecx + 4], 0
        ; Exact mapped bytes 74 1F: je 0x50a097
        __asm _emit 0x74
        __asm _emit 0x1f
        mov edx, dword ptr [ebp - 14h]
        and edx, 100000h
        test edx, edx
        ; Exact mapped bytes 74 12: je 0x50a097
        __asm _emit 0x74
        __asm _emit 0x12
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 4]
        mov edx, dword ptr [ebp + 0ch]
        add ecx, dword ptr [edx + 4]
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx]
        cmp eax, dword ptr [edx]
        ; Exact mapped bytes 7E 17: jle 0x50a0ba
        __asm _emit 0x7e
        __asm _emit 0x17
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [ecx + 4]
        cmp eax, dword ptr [edx + 4]
        ; Exact mapped bytes 7E 09: jle 0x50a0ba
        __asm _emit 0x7e
        __asm _emit 0x09
        mov dword ptr [ebp - 1ch], 1
        ; Exact mapped bytes EB 07: jmp 0x50a0c1
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 1ch], 0
        mov eax, dword ptr [ebp - 1ch]
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
