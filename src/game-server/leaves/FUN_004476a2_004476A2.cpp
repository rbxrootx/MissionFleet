// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004476A2 .. +0x98 bytes.
extern "C" __declspec(naked) void FUN_004476a2_004476A2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 32h
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 0ch], eax
        lea ecx, [ebp - 4]
        push ecx
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 0ch]
        push eax
        ; Exact mapped bytes E8 DF C0 FB FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0xc0
        __asm _emit 0xfb
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 40: je 0x447728
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 370h
        cmp dword ptr [edx + eax + 16bdch], 0
        ; Exact mapped bytes 75 24: jne 0x447728
        __asm _emit 0x75
        __asm _emit 0x24
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp + 8]
        imul eax, eax, 370h
        lea ecx, [edx + eax + 16c04h]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 F0 FE FF FF: call 0x447616
        __asm _emit 0xe8
        __asm _emit 0xf0
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x44772a
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 10h
        cmp ebp, esp
        ; Exact mapped bytes E8 AC 10 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x10
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
