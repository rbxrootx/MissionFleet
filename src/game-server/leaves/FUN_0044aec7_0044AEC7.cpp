// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044AEC7 .. +0x120 bytes.
extern "C" __declspec(naked) void FUN_0044aec7_0044AEC7() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 4], 4
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 168h]
        xor edx, edx
        mov dl, byte ptr [ecx + 91h]
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 4]
        push eax
        lea ecx, [ebp - 8]
        push ecx
        lea edx, [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 76 AF FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 0F 84 92 00 00 00: je 0x44afb7
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0x92
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 31h
        mov dword ptr [ebp - 14h], 0
        lea eax, [ebp - 10h]
        push eax
        lea ecx, [ebp - 14h]
        push ecx
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 168h]
        xor ecx, ecx
        mov cl, byte ptr [edx + 91h]
        lea edx, [eax + ecx*4 + 78h]
        push edx
        ; Exact mapped bytes E8 31 AF FC FF: call 0x415e90
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0xaf
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x44af86
        __asm _emit 0x74
        __asm _emit 0x20
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 168h]
        xor edx, edx
        mov dl, byte ptr [eax + 91h]
        mov eax, dword ptr [ecx + edx*4 + 78h]
        ; Exact mapped bytes EB 53: jmp 0x44afd9
        __asm _emit 0xeb
        __asm _emit 0x53
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 18h]
        mov eax, dword ptr [edx + 168h]
        xor edx, edx
        mov dl, byte ptr [eax + 91h]
        mov eax, dword ptr [ecx + edx*4 + 78h]
        push eax
        push 5b701ch
        ; Exact mapped bytes E8 66 4C 08 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x66
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 8
        or eax, 0ffffffffh
        ; Exact mapped bytes EB 22: jmp 0x44afd9
        __asm _emit 0xeb
        __asm _emit 0x22
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx + 168h]
        xor eax, eax
        mov al, byte ptr [edx + 91h]
        push eax
        push 5b7044h
        ; Exact mapped bytes E8 42 4C 08 00: call 0x4cfc15
        __asm _emit 0xe8
        __asm _emit 0x42
        __asm _emit 0x4c
        __asm _emit 0x08
        __asm _emit 0x00
        add esp, 8
        or eax, 0ffffffffh
        add esp, 18h
        cmp ebp, esp
        ; Exact mapped bytes E8 FD D7 05 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xd7
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
