// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0047C1F1 .. +0x95 bytes.
extern "C" __declspec(naked) void FUN_0047c1f1_0047C1F1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 0ch], 0
        ; Exact mapped bytes 74 60: je 0x47c278
        __asm _emit 0x74
        __asm _emit 0x60
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0ch]
        ; Exact mapped bytes 66 8B 82 70 01 00 00: mov ax, word ptr [edx + 0x170]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x82
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 45 F8: mov word ptr [ebp - 8], ax
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x45
        __asm _emit 0xf8
        mov ecx, dword ptr [ebp - 0ch]
        mov dl, byte ptr [ecx + 2ch]
        mov byte ptr [ebp - 4], dl
        mov eax, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [eax + 0ch]
        ; Exact mapped bytes 66 8B 91 84 01 00 00: mov dx, word ptr [ecx + 0x184]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x91
        __asm _emit 0x84
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 66 89 55 FA: mov word ptr [ebp - 6], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x55
        __asm _emit 0xfa
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 D5 85 F8 FF: call 0x404820
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0x85
        __asm _emit 0xf8
        __asm _emit 0xff
        mov byte ptr [ebp - 3], al
        push 6
        lea eax, [ebp - 8]
        push eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 0ch]
        mov eax, dword ptr [edx + 170h]
        or eax, 400000h
        push eax
        push 80020116h
        mov ecx, dword ptr [ebp - 0ch]
        mov ecx, dword ptr [ecx + 8]
        ; Exact mapped bytes E8 7E D8 00 00: call 0x489af6
        __asm _emit 0xe8
        __asm _emit 0x7e
        __asm _emit 0xd8
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 5E C5 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0xc5
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
