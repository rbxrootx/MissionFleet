// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EDA46 .. +0xB7 bytes.
extern "C" __declspec(naked) void FUN_004eda46_004EDA46() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [eax]
        cmp edx, dword ptr [ecx]
        ; Exact mapped bytes 0F 84 91 00 00 00: je 0x4edaf1
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x91
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 34 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7D 10: jge 0x4eda7d
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 44 34 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 C0 4B 5C 00: cmp eax, dword ptr [0x5c4bc0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x4b
        __asm _emit 0x5c
        __asm _emit 0x00
        ; Exact mapped bytes 75 0D: jne 0x4eda8a
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 34 34 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x34
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        cmp dword ptr [eax], 0
        ; Exact mapped bytes 7D 1C: jge 0x4edaa6
        __asm _emit 0x7d
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax]
        push ecx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 21 34 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x21
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        mov edx, dword ptr [eax + 4]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 59 FF FF FF: call 0x4ed9fd
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 4B: jmp 0x4edaf1
        __asm _emit 0xeb
        __asm _emit 0x4b
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 42 FB FF FF: call 0x4ed5f0
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 03 34 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        ; Exact mapped bytes 3B 05 C0 4B 5C 00: cmp eax, dword ptr [0x5c4bc0]
        __asm _emit 0x3b
        __asm _emit 0x05
        __asm _emit 0xc0
        __asm _emit 0x4b
        __asm _emit 0x5c
        __asm _emit 0x00
        ; Exact mapped bytes 75 14: jne 0x4edad2
        __asm _emit 0x75
        __asm _emit 0x14
        push 14eh
        push 5c4bd4h
        ; Exact mapped bytes E8 33 6F 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0x6f
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4edad2
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 D6: jne 0x4edaae
        __asm _emit 0x75
        __asm _emit 0xd6
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx]
        mov dword ptr [ecx], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 CF 33 04 00: call 0x530eb9
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x33
        __asm _emit 0x04
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes FF 15 E8 23 5E 00: call dword ptr [0x5e23e8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0x5e
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
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
