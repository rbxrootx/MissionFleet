// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5862E490 .. +0x136 bytes.
extern "C" __declspec(naked) void FUN_5862e490_5862E490() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        ; Exact mapped bytes E8 17 27 19 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0x27
        __asm _emit 0x19
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 8C E2 00 00 00: jl 0x5862e593
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xe2
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0f8h]
        ; Exact mapped bytes E8 01 27 19 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x27
        __asm _emit 0x19
        __asm _emit 0x00
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0f8h]
        ; Exact mapped bytes E8 A1 27 19 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x27
        __asm _emit 0x19
        __asm _emit 0x00
        cmp esi, eax
        ; Exact mapped bytes 0F 8C BC 00 00 00: jl 0x5862e593
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0xbc
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        ; Exact mapped bytes E8 DB 26 19 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x26
        __asm _emit 0x19
        __asm _emit 0x00
        mov esi, eax
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 0f8h]
        ; Exact mapped bytes E8 7B 27 19 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0x27
        __asm _emit 0x19
        __asm _emit 0x00
        add eax, 8
        cmp esi, eax
        ; Exact mapped bytes 0F 8D 93 00 00 00: jge 0x5862e593
        __asm _emit 0x0f
        __asm _emit 0x8d
        __asm _emit 0x93
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 124h]
        ; Exact mapped bytes E8 82 73 E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0x73
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx eax, al
        test eax, eax
        ; Exact mapped bytes 75 17: jne 0x5862e52c
        __asm _emit 0x75
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 124h]
        mov dword ptr [ebp - 8], edx
        push 1
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B5 79 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x79
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 124h]
        mov dword ptr [ebp - 14h], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 70 DB E5 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0xdb
        __asm _emit 0xe5
        __asm _emit 0xff
        mov esi, eax
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0f8h]
        ; Exact mapped bytes E8 70 26 19 00: call 0x587c0bc0
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x26
        __asm _emit 0x19
        __asm _emit 0x00
        mov edi, eax
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f8h]
        ; Exact mapped bytes E8 10 27 19 00: call 0x587c0c70
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x27
        __asm _emit 0x19
        __asm _emit 0x00
        sub edi, eax
        imul ecx, edi, 18h
        lea edx, [esi + ecx + 91h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 124h]
        ; Exact mapped bytes E8 43 84 E5 FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x43
        __asm _emit 0x84
        __asm _emit 0xe5
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp - 10h]
        push edx
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes E8 90 70 18 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x70
        __asm _emit 0x18
        __asm _emit 0x00
        nop
        ; Exact mapped bytes EB 2D: jmp 0x5862e5c0
        __asm _emit 0xeb
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 124h]
        ; Exact mapped bytes E8 EF 72 E6 FF: call 0x58495890
        __asm _emit 0xe8
        __asm _emit 0xef
        __asm _emit 0x72
        __asm _emit 0xe6
        __asm _emit 0xff
        movzx ecx, al
        cmp ecx, 1
        ; Exact mapped bytes 75 17: jne 0x5862e5c0
        __asm _emit 0x75
        __asm _emit 0x17
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 124h]
        mov dword ptr [ebp - 18h], eax
        push 0
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 21 79 E5 FF: call 0x58485ee0
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x79
        __asm _emit 0xe5
        __asm _emit 0xff
        nop
        pop edi
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
