// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005733F5 .. +0xCF bytes.
extern "C" __declspec(naked) void FUN_005733f5_005733F5() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58f91ah
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
        sub esp, 8
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 14h], ecx
        push 27ch
        push 67cd14h
        mov eax, dword ptr [ebp - 14h]
        push eax
        ; Exact mapped bytes E8 37 6E F6 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x6e
        __asm _emit 0xf6
        __asm _emit 0xff
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x573443
        __asm _emit 0x75
        __asm _emit 0x14
        push 27dh
        push 67cd14h
        ; Exact mapped bytes E8 02 59 FB FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x59
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x573443
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x573429
        __asm _emit 0x75
        __asm _emit 0xe0
        mov edx, dword ptr [ebp - 14h]
        cmp dword ptr [edx + 0ach], 0
        ; Exact mapped bytes 75 02: jne 0x573457
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 5A: jmp 0x5734b1
        __asm _emit 0xeb
        __asm _emit 0x5a
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 A8 18 FB FF: call 0x524d07
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x18
        __asm _emit 0xfb
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 0b0h
        ; Exact mapped bytes E8 36 19 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x36
        __asm _emit 0x19
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov eax, dword ptr [ebp + 8]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        ; Exact mapped bytes E8 0D 1A F9 FF: call 0x504e8f
        __asm _emit 0xe8
        __asm _emit 0x0d
        __asm _emit 0x1a
        __asm _emit 0xf9
        __asm _emit 0xff
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 02 19 FB FF: call 0x524d8c
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x19
        __asm _emit 0xfb
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x5734a2
        __asm _emit 0x75
        __asm _emit 0x14
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 14 19 FB FF: call 0x524daa
        __asm _emit 0xe8
        __asm _emit 0x14
        __asm _emit 0x19
        __asm _emit 0xfb
        __asm _emit 0xff
        push eax
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 3B 94 F5 FF: call 0x4cc8ec
        __asm _emit 0xe8
        __asm _emit 0x3b
        __asm _emit 0x94
        __asm _emit 0xf5
        __asm _emit 0xff
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
