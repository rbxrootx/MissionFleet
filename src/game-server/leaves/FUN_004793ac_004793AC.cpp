// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004793AC .. +0xD1 bytes.
extern "C" __declspec(naked) void FUN_004793ac_004793AC() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 0ch]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 0ch], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 0c24h], 0
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 0c1ch], 0
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [edx + 0c28h], 0
        push 0c00h
        push 0
        mov eax, dword ptr [ebp - 4]
        add eax, 1ch
        push eax
        ; Exact mapped bytes E8 61 FF 02 00: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0xff
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 14h], 0
        ; Exact mapped bytes 74 23: je 0x47943e
        __asm _emit 0x74
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 4]
        cmp dword ptr [edx + 18h], 0
        ; Exact mapped bytes 74 1A: je 0x47943e
        __asm _emit 0x74
        __asm _emit 0x1a
        push -1
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 14h]
        ; Exact mapped bytes E8 7F 19 00 00: call 0x47adb0
        __asm _emit 0xe8
        __asm _emit 0x7f
        __asm _emit 0x19
        __asm _emit 0x00
        __asm _emit 0x00
        push -1
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 18h]
        ; Exact mapped bytes E8 62 1C 00 00: call 0x47b0a0
        __asm _emit 0xe8
        __asm _emit 0x62
        __asm _emit 0x1c
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov ecx, dword ptr [edx + 0c20h]
        ; Exact mapped bytes E8 84 10 F9 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0x10
        __asm _emit 0xf9
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0c2ch]
        ; Exact mapped bytes E8 76 10 F9 FF: call 0x40a4d0
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0x10
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 10h]
        ; Exact mapped bytes E8 08 ED F9 FF: call 0x418175
        __asm _emit 0xe8
        __asm _emit 0x08
        __asm _emit 0xed
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 4
        cmp ebp, esp
        ; Exact mapped bytes E8 69 F3 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x69
        __asm _emit 0xf3
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
