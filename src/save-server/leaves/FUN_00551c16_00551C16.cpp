// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00551C16 .. +0x310 bytes.
extern "C" __declspec(naked) void FUN_00551c16_00551C16() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 250h
        mov dword ptr [ebp - 240h], 0
        mov dword ptr [ebp - 224h], 0
        mov dword ptr [ebp - 114h], 0
        mov dword ptr [ebp - 23ch], 0
        mov dword ptr [ebp - 220h], 0
        mov dword ptr [ebp - 110h], 0
        lea eax, [ebp - 22ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes FF 15 E0 C2 68 00: call dword ptr [0x68c2e0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe0
        __asm _emit 0xc2
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 234h], eax
        cmp dword ptr [ebp - 234h], 0
        ; Exact mapped bytes 7D 07: jge 0x551c82
        __asm _emit 0x7d
        __asm _emit 0x07
        xor eax, eax
        ; Exact mapped bytes E9 9A 02 00 00: jmp 0x551f1c
        __asm _emit 0xe9
        __asm _emit 0x9a
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea edx, [ebp - 4]
        push edx
        push 20019h
        push 0
        push 67c218h
        push 80000000h
        ; Exact mapped bytes FF 15 98 B2 68 00: call dword ptr [0x68b298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 68 01 00 00: jne 0x551e0d
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x68
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 22ch]
        mov dword ptr [ebp - 114h], eax
        cmp dword ptr [ebp - 114h], 0
        ; Exact mapped bytes 75 0C: jne 0x551cc6
        __asm _emit 0x75
        __asm _emit 0x0c
        mov dword ptr [ebp - 24ch], 0
        ; Exact mapped bytes EB 4D: jmp 0x551d13
        __asm _emit 0xeb
        __asm _emit 0x4d
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        ; Exact mapped bytes FF 15 F0 B8 68 00: call dword ptr [0x68b8f0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xf0
        __asm _emit 0xb8
        __asm _emit 0x68
        __asm _emit 0x00
        lea edx, [eax + eax + 2]
        mov dword ptr [ebp - 240h], edx
        mov eax, dword ptr [ebp - 240h]
        add eax, 3
        and al, 0fch
        ; Exact mapped bytes E8 B3 42 F1 FF: call 0x465fa0
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x42
        __asm _emit 0xf1
        __asm _emit 0xff
        mov dword ptr [ebp - 250h], esp
        mov eax, dword ptr [ebp - 240h]
        push eax
        mov ecx, dword ptr [ebp - 114h]
        push ecx
        mov edx, dword ptr [ebp - 250h]
        push edx
        ; Exact mapped bytes E8 C3 70 F0 FF: call 0x458dd0
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0x70
        __asm _emit 0xf0
        __asm _emit 0xff
        mov dword ptr [ebp - 24ch], eax
        lea eax, [ebp - 228h]
        push eax
        push 20019h
        push 0
        mov ecx, dword ptr [ebp - 24ch]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 98 B2 68 00: call dword ptr [0x68b298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x551e03
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 230h]
        push eax
        push 20019h
        push 0
        push 67c220h
        mov ecx, dword ptr [ebp - 228h]
        push ecx
        ; Exact mapped bytes FF 15 98 B2 68 00: call dword ptr [0x68b298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x551df6
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 244h], 105h
        lea edx, [ebp - 244h]
        push edx
        lea eax, [ebp - 10ch]
        push eax
        lea ecx, [ebp - 110h]
        push ecx
        push 0
        push 0
        mov edx, dword ptr [ebp - 230h]
        push edx
        ; Exact mapped bytes FF 15 9C B2 68 00: call dword ptr [0x68b29c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 53: jne 0x551de9
        __asm _emit 0x75
        __asm _emit 0x53
        lea eax, [ebp - 238h]
        push eax
        lea ecx, [ebp - 21ch]
        push ecx
        lea edx, [ebp - 10ch]
        push edx
        ; Exact mapped bytes E8 76 01 00 00: call 0x551f26
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov eax, dword ptr [ebp - 238h]
        push eax
        lea ecx, [ebp - 21ch]
        push ecx
        ; Exact mapped bytes E8 AA FC FD FF: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xaa
        __asm _emit 0xfc
        __asm _emit 0xfd
        __asm _emit 0xff
        mov edx, dword ptr [eax + 6ch]
        push edx
        ; Exact mapped bytes FF 15 EC BB 68 00: call dword ptr [0x68bbec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 220h], eax
        cmp dword ptr [ebp - 220h], 1
        ; Exact mapped bytes 75 0A: jne 0x551de9
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 220h], 0
        mov eax, dword ptr [ebp - 230h]
        push eax
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 228h]
        push ecx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        cmp dword ptr [ebp - 220h], 0
        ; Exact mapped bytes 0F 85 EF 00 00 00: jne 0x551f09
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xef
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 228h]
        push eax
        push 20019h
        push 0
        push 67c22ch
        push 80000000h
        ; Exact mapped bytes FF 15 98 B2 68 00: call dword ptr [0x68b298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 C9 00 00 00: jne 0x551f09
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0xc9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 230h]
        push ecx
        push 20019h
        push 0
        push 67c238h
        mov edx, dword ptr [ebp - 228h]
        push edx
        ; Exact mapped bytes FF 15 98 B2 68 00: call dword ptr [0x68b298]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x98
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 0F 85 94 00 00 00: jne 0x551efc
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x94
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 248h], 105h
        lea eax, [ebp - 248h]
        push eax
        lea ecx, [ebp - 10ch]
        push ecx
        lea edx, [ebp - 110h]
        push edx
        push 0
        push 0
        mov eax, dword ptr [ebp - 230h]
        push eax
        ; Exact mapped bytes FF 15 9C B2 68 00: call dword ptr [0x68b29c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 53: jne 0x551eef
        __asm _emit 0x75
        __asm _emit 0x53
        lea ecx, [ebp - 238h]
        push ecx
        lea edx, [ebp - 21ch]
        push edx
        lea eax, [ebp - 10ch]
        push eax
        ; Exact mapped bytes E8 70 00 00 00: call 0x551f26
        __asm _emit 0xe8
        __asm _emit 0x70
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 238h]
        push ecx
        lea edx, [ebp - 21ch]
        push edx
        ; Exact mapped bytes E8 A4 FB FD FF: call 0x531a70
        __asm _emit 0xe8
        __asm _emit 0xa4
        __asm _emit 0xfb
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [eax + 6ch]
        push eax
        ; Exact mapped bytes FF 15 EC BB 68 00: call dword ptr [0x68bbec]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xec
        __asm _emit 0xbb
        __asm _emit 0x68
        __asm _emit 0x00
        mov dword ptr [ebp - 220h], eax
        cmp dword ptr [ebp - 220h], 1
        ; Exact mapped bytes 75 0A: jne 0x551eef
        __asm _emit 0x75
        __asm _emit 0x0a
        mov dword ptr [ebp - 220h], 0
        mov ecx, dword ptr [ebp - 230h]
        push ecx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 228h]
        push edx
        ; Exact mapped bytes FF 15 90 B2 68 00: call dword ptr [0x68b290]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x90
        __asm _emit 0xb2
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 22ch]
        push eax
        ; Exact mapped bytes FF 15 18 C3 68 00: call dword ptr [0x68c318]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x18
        __asm _emit 0xc3
        __asm _emit 0x68
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 220h]
        lea esp, [ebp - 250h]
        mov esp, ebp
        pop ebp
        ret
    }
}
