// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004A1089 .. +0x159 bytes.
extern "C" __declspec(naked) void FUN_004a1089_004A1089() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57ef8ch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 34h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 40h], ecx
        mov dword ptr [ebp - 3ch], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 4E FE 08 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0xfe
        __asm _emit 0x08
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 67 BA 0A 00: call 0x54cb2f
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xba
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 2
        ; Exact mapped bytes 75 29: jne 0x4a10f6
        __asm _emit 0x75
        __asm _emit 0x29
        lea eax, [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 A1 C3 04 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 3ch]
        or ecx, 1
        mov dword ptr [ebp - 3ch], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 5E C7 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc7
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 D9 00 00 00: jmp 0x4a11cf
        __asm _emit 0xe9
        __asm _emit 0xd9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 40h]
        ; Exact mapped bytes E8 31 BA 0A 00: call 0x54cb2f
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xba
        __asm _emit 0x0a
        __asm _emit 0x00
        cmp eax, 1
        ; Exact mapped bytes 74 17: je 0x4a111a
        __asm _emit 0x74
        __asm _emit 0x17
        lea edx, [ebp - 38h]
        push edx
        mov eax, dword ptr [ebp - 40h]
        mov ecx, dword ptr [eax + 4]
        push ecx
        mov edx, dword ptr [eax]
        push edx
        ; Exact mapped bytes E8 20 EE FF FF: call 0x49ff36
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 51: jne 0x4a116b
        __asm _emit 0x75
        __asm _emit 0x51
        push 0f099h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 59 9A 05 00: call 0x4fab80
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0x9a
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4a113f
        __asm _emit 0x75
        __asm _emit 0x14
        push 895h
        push 5cbe8ch
        ; Exact mapped bytes E8 C6 38 09 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x38
        __asm _emit 0x09
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4a113f
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D5: jne 0x4a111a
        __asm _emit 0x75
        __asm _emit 0xd5
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 29 C3 04 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x29
        __asm _emit 0xc3
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        or edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 E6 C6 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 64: jmp 0x4a11cf
        __asm _emit 0xeb
        __asm _emit 0x64
        lea eax, [ebp - 38h]
        push eax
        ; Exact mapped bytes E8 AE F0 FF FF: call 0x4a0222
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xf0
        __asm _emit 0xff
        __asm _emit 0xff
        push 80h
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 26 D0 04 00: call 0x4ee1a7
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xd0
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], eax
        lea ecx, [ebp - 38h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 CC FD 08 00: call 0x530f60
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xfd
        __asm _emit 0x08
        __asm _emit 0x00
        push eax
        mov eax, dword ptr [ebp - 10h]
        push eax
        ; Exact mapped bytes E8 E2 E1 00 00: call 0x4af380
        __asm _emit 0xe8
        __asm _emit 0xe2
        __asm _emit 0xe1
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        push -1
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 88 CF 04 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xcf
        __asm _emit 0x04
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 C3 C2 04 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0xc3
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 3ch]
        or edx, 1
        mov dword ptr [ebp - 3ch], edx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 14h]
        ; Exact mapped bytes E8 80 C6 04 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0xc6
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
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
