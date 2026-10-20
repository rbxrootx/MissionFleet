// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EE6C2 .. +0xD7 bytes.
extern "C" __declspec(naked) void FUN_004ee6c2_004EE6C2() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58e2cfh
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
        sub esp, 20h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 40h], -1
        ; Exact mapped bytes 75 14: jne 0x4ee700
        __asm _emit 0x75
        __asm _emit 0x14
        push 0
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 64 37 04 00: call 0x531e5c
        __asm _emit 0xe8
        __asm _emit 0x64
        __asm _emit 0x37
        __asm _emit 0x04
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes E9 86 00 00 00: jmp 0x4ee786
        __asm _emit 0xe9
        __asm _emit 0x86
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 8E 01 00 00: call 0x4ee89a
        __asm _emit 0xe8
        __asm _emit 0x8e
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 2ch]
        cmp dword ptr [edx + 40h], 1
        ; Exact mapped bytes 74 60: je 0x4ee775
        __asm _emit 0x74
        __asm _emit 0x60
        mov eax, dword ptr [ebp - 2ch]
        cmp dword ptr [eax + 40h], 0
        ; Exact mapped bytes 7F 14: jg 0x4ee732
        __asm _emit 0x7f
        __asm _emit 0x14
        push 11ch
        push 677c28h
        ; Exact mapped bytes E8 13 A6 03 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0xa6
        __asm _emit 0x03
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4ee732
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x4ee715
        __asm _emit 0x75
        __asm _emit 0xdd
        push 0
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 17 A0 FF FF: call 0x4e8759
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov edx, dword ptr [ebp - 2ch]
        mov eax, dword ptr [edx + 40h]
        push eax
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 84 81 FF FF: call 0x4e68dc
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x81
        __asm _emit 0xff
        __asm _emit 0xff
        push 1
        lea ecx, [ebp - 14h]
        push ecx
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 CE 5F 04 00: call 0x534734
        __asm _emit 0xe8
        __asm _emit 0xce
        __asm _emit 0x5f
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 28h]
        ; Exact mapped bytes E8 96 A0 FF FF: call 0x4e880b
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xa0
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [edx], eax
        mov ecx, dword ptr [ebp - 10h]
        mov dword ptr [edx + 4], ecx
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
