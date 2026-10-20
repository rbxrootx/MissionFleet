// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00518D47 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_00518d47_00518D47() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        push 419h
        push 5c8c2ch
        mov eax, dword ptr [ebp - 2ch]
        push eax
        ; Exact mapped bytes E8 FD 23 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x23
        __asm _emit 0xfe
        __asm _emit 0xff
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 4C E9 FF FF: call 0x5176bf
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        push 14h
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 9E 02 F9 FF: call 0x4a9020
        __asm _emit 0xe8
        __asm _emit 0x9e
        __asm _emit 0x02
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 10h], edx
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 14h], eax
        mov cl, byte ptr [ebp + 10h]
        mov byte ptr [ebp - 0bh], cl
        mov edx, dword ptr [ebp + 10h]
        shr edx, 10h
        and edx, 0ffffh
        mov byte ptr [ebp - 0ch], dl
        push 14h
        lea eax, [ebp - 14h]
        push eax
        lea ecx, [ebp - 28h]
        push ecx
        ; Exact mapped bytes E8 BB 75 F9 FF: call 0x4b0370
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0x75
        __asm _emit 0xf9
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 1D: je 0x518dd9
        __asm _emit 0x74
        __asm _emit 0x1d
        lea edx, [ebp - 14h]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 56 E9 FF FF: call 0x517722
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0xe9
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 2ch]
        mov dword ptr [ecx + 84h], 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
