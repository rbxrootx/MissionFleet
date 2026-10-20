// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588BEBA0 .. +0x11D bytes.
extern "C" __declspec(naked) void FUN_588beba0() {
    __asm {
        cmp dword ptr [esp + 8], 2
        push esi
        mov esi, ecx
        ; Exact mapped bytes 0F 85 09 01 00 00: jne 0x588becb7
        __asm _emit 0x0f
        __asm _emit 0x85
        __asm _emit 0x09
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [esi + 11ch]
        mov eax, dword ptr [esp + 8]
        cmp eax, ecx
        ; Exact mapped bytes 75 5D: jne 0x588bec19
        __asm _emit 0x75
        __asm _emit 0x5d
        mov ecx, dword ptr [esi + 120h]
        mov eax, 1
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 124h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 11ch]
        mov dword ptr [ecx + 50h], 5
        mov ecx, dword ptr [esi + 80h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov eax, dword ptr [esi + 88h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 50 24: and word ptr [eax + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x50
        __asm _emit 0x24
        mov eax, dword ptr [esi + 90h]
        mov ecx, edx
        ; Exact mapped bytes 66 21 48 24: and word ptr [eax + 0x24], cx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x48
        __asm _emit 0x24
        mov ecx, esi
        ; Exact mapped bytes E8 04 FC FF FF: call 0x588be810
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 FD FD FF FF: call 0x588bea10
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
        cmp eax, dword ptr [esi + 120h]
        ; Exact mapped bytes 75 3F: jne 0x588bec60
        __asm _emit 0x75
        __asm _emit 0x3f
        mov edx, dword ptr [esi + 124h]
        mov eax, 1
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 11ch]
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 120h]
        mov dword ptr [edx + 50h], 5
        mov ecx, dword ptr [esi + 80h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes EB 99: jmp 0x588bebf9
        __asm _emit 0xeb
        __asm _emit 0x99
        cmp eax, dword ptr [esi + 124h]
        ; Exact mapped bytes 75 4F: jne 0x588becb7
        __asm _emit 0x75
        __asm _emit 0x4f
        mov eax, 1
        mov dword ptr [ecx + 50h], eax
        mov edx, dword ptr [esi + 120h]
        mov dword ptr [edx + 50h], eax
        mov ecx, dword ptr [esi + 124h]
        mov dword ptr [ecx + 50h], 5
        mov ecx, dword ptr [esi + 80h]
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 88h]
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [esi + 90h]
        ; Exact mapped bytes 66 09 41 24: or word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x09
        __asm _emit 0x41
        __asm _emit 0x24
        mov ecx, esi
        ; Exact mapped bytes E8 60 FB FF FF: call 0x588be810
        __asm _emit 0xe8
        __asm _emit 0x60
        __asm _emit 0xfb
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, esi
        ; Exact mapped bytes E8 59 FD FF FF: call 0x588bea10
        __asm _emit 0xe8
        __asm _emit 0x59
        __asm _emit 0xfd
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        pop esi
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
