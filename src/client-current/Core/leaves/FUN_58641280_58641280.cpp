// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58641280 .. +0x154 bytes.
extern "C" __declspec(naked) void FUN_58641280_58641280() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 820h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 808h], ecx
        cmp dword ptr [ebp + 14h], 800h
        ; Exact mapped bytes 72 19: jb 0x586412bb
        __asm _emit 0x72
        __asm _emit 0x19
        push 800h
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 804h]
        push ecx
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        ; Exact mapped bytes EB 19: jmp 0x586412d4
        __asm _emit 0xeb
        __asm _emit 0x19
        mov edx, dword ptr [ebp + 14h]
        add edx, 1
        push edx
        mov eax, dword ptr [ebp + 10h]
        push eax
        lea ecx, [ebp - 804h]
        push ecx
        ; Exact mapped bytes FF 15 0C 43 89 58: call dword ptr [0x5889430c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x0c
        __asm _emit 0x43
        __asm _emit 0x89
        __asm _emit 0x58
        nop
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [edx + 0c8h]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 0F 85 DB 00 00 00: jne 0x586413c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xdb
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 808h]
        mov edx, dword ptr [ecx + 0cch]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F 85 C6 00 00 00: jne 0x586413c4
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc6
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 64: jne 0x58641368
        __asm _emit 0x75
        __asm _emit 0x64
        mov eax, dword ptr [ebp - 808h]
        mov ecx, dword ptr [eax + 0b4h]
        mov dword ptr [ebp - 810h], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 77 A2 E7 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xa2
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 80ch], eax
        mov ecx, dword ptr [ebp - 80ch]
        push ecx
        mov ecx, dword ptr [ebp - 810h]
        ; Exact mapped bytes E8 5F 4D E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x4d
        __asm _emit 0xe4
        __asm _emit 0xff
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [edx + 0a4h]
        mov dword ptr [ebp - 814h], eax
        lea ecx, [ebp - 804h]
        push ecx
        mov ecx, dword ptr [ebp - 814h]
        ; Exact mapped bytes E8 1B B4 EA FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0xb4
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        ; Exact mapped bytes EB 5C: jmp 0x586413c4
        __asm _emit 0xeb
        __asm _emit 0x5c
        mov edx, dword ptr [ebp - 808h]
        mov eax, dword ptr [edx + 7ch]
        mov dword ptr [ebp - 81ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        ; Exact mapped bytes 8B 0D 1C 06 96 58: mov ecx, dword ptr [0x5896061c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x1c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 16 A2 E7 FF: call 0x584bb5a0
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xa2
        __asm _emit 0xe7
        __asm _emit 0xff
        mov dword ptr [ebp - 818h], eax
        mov eax, dword ptr [ebp - 818h]
        push eax
        mov ecx, dword ptr [ebp - 81ch]
        ; Exact mapped bytes E8 FE 4C E4 FF: call 0x584860a0
        __asm _emit 0xe8
        __asm _emit 0xfe
        __asm _emit 0x4c
        __asm _emit 0xe4
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 808h]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 820h], edx
        lea eax, [ebp - 804h]
        push eax
        mov ecx, dword ptr [ebp - 820h]
        ; Exact mapped bytes E8 BD B3 EA FF: call 0x584ec780
        __asm _emit 0xe8
        __asm _emit 0xbd
        __asm _emit 0xb3
        __asm _emit 0xea
        __asm _emit 0xff
        nop
        mov ecx, dword ptr [ebp - 4]
        xor ecx, ebp
        ; Exact mapped bytes E8 82 FC 1E 00: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0x1e
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
