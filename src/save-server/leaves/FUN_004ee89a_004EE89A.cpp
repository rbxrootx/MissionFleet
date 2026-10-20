// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE89A .. +0xD7 bytes.
extern "C" __declspec(naked) void FUN_004ee89a_004EE89A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 1ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 1ch], ecx
        push 1
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 2A 47 FE FF: call 0x4d2fda
        __asm _emit 0xe8
        __asm _emit 0x2a
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 1F 47 FE FF: call 0x4d2fda
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0x47
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 98 35 04 00: call 0x531e5c
        __asm _emit 0xe8
        __asm _emit 0x98
        __asm _emit 0x35
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 7C 06: jl 0x4ee8d0
        __asm _emit 0x7c
        __asm _emit 0x06
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 7D 14: jge 0x4ee8e4
        __asm _emit 0x7d
        __asm _emit 0x14
        push 140h
        push 677c28h
        ; Exact mapped bytes E8 61 A4 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xa4
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee8e4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x4ee8c4
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 64h], 0
        ; Exact mapped bytes 74 64: je 0x4ee957
        __asm _emit 0x74
        __asm _emit 0x64
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 CC 38 04 00: call 0x5321c7
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0x38
        __asm _emit 0x04
        __asm _emit 0x00
        lea edx, [ebp - 18h]
        push edx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 54 D2 03 00: call 0x52bb5b
        __asm _emit 0xe8
        __asm _emit 0x54
        __asm _emit 0xd2
        __asm _emit 0x03
        __asm _emit 0x00
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 A1 39 04 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 4ch], eax
        ; Exact mapped bytes 7D 18: jge 0x4ee92f
        __asm _emit 0x7d
        __asm _emit 0x18
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 91 39 04 00: call 0x5322b0
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        sub eax, dword ptr [edx + 4ch]
        cdq
        sub eax, edx
        sar eax, 1
        neg eax
        mov dword ptr [ebp - 8], eax
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 8F 39 04 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 1ch]
        cmp dword ptr [ecx + 50h], eax
        ; Exact mapped bytes 7D 18: jge 0x4ee957
        __asm _emit 0x7d
        __asm _emit 0x18
        lea ecx, [ebp - 18h]
        ; Exact mapped bytes E8 7F 39 04 00: call 0x5322c6
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x39
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 1ch]
        sub eax, dword ptr [edx + 50h]
        cdq
        sub eax, edx
        sar eax, 1
        neg eax
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [eax], ecx
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [eax + 4], edx
        mov eax, dword ptr [ebp + 8]
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
