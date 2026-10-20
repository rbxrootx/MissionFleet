// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D1037 .. +0x105 bytes.
extern "C" __declspec(naked) void FUN_004d1037_004D1037() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d893h
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
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 14h], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 B8 27 5E 00: call dword ptr [0x5e27b8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0x27
        __asm _emit 0x5e
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x4d1084
        __asm _emit 0x75
        __asm _emit 0x14
        push 134h
        push 5c7f78h
        ; Exact mapped bytes E8 81 39 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x39
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d1084
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x4d105f
        __asm _emit 0x75
        __asm _emit 0xd5
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 90h]
        and ecx, 80000h
        test ecx, ecx
        ; Exact mapped bytes 75 14: jne 0x4d10b1
        __asm _emit 0x75
        __asm _emit 0x14
        push 135h
        push 5c7f78h
        ; Exact mapped bytes E8 54 39 06 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0x39
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d10b1
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D3: jne 0x4d108a
        __asm _emit 0x75
        __asm _emit 0xd3
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 48 FE 05 00: call 0x530f07
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0xfe
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 1
        push 104h
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 25 CF 01 00: call 0x4edff8
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0xcf
        __asm _emit 0x01
        __asm _emit 0x00
        push eax
        push 104h
        push 466h
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 53 BF 06 00: call 0x53d039
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0xbf
        __asm _emit 0x06
        __asm _emit 0x00
        mov ecx, eax
        ; Exact mapped bytes E8 EC AA 06 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xaa
        __asm _emit 0x06
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 7D 0A: jge 0x4d10fb
        __asm _emit 0x7d
        __asm _emit 0x0a
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 B9 C5 01 00: call 0x4ed6b2
        __asm _emit 0xe8
        __asm _emit 0xb9
        __asm _emit 0xc5
        __asm _emit 0x01
        __asm _emit 0x00
        ; Exact mapped bytes EB 0A: jmp 0x4d1105
        __asm _emit 0xeb
        __asm _emit 0x0a
        push -1
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 2E D0 01 00: call 0x4ee133
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xd0
        __asm _emit 0x01
        __asm _emit 0x00
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 69 C3 01 00: call 0x4ed47a
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xc3
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 14h]
        or ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov byte ptr [ebp - 4], 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 26 C7 01 00: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0x26
        __asm _emit 0xc7
        __asm _emit 0x01
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
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
