// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585E6E20 .. +0x54 bytes.
extern "C" __declspec(naked) void FUN_585e6e20_585E6E20() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        movzx ecx, byte ptr [eax + 10688h]
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x585e6e37
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB 37: jmp 0x585e6e6e
        __asm _emit 0xeb
        __asm _emit 0x37
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 20e6ch], eax
        mov ecx, dword ptr [ebp - 4]
        mov dl, byte ptr [ebp + 8]
        mov byte ptr [ecx + 10688h], dl
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 20e6ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 20dech
        push eax
        ; Exact mapped bytes E8 25 5A 26 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x5a
        __asm _emit 0x26
        __asm _emit 0x00
        add esp, 0ch
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
