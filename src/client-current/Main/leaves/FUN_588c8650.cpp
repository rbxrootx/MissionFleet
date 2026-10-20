// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588C8650 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_588c8650() {
    __asm {
        mov eax, 0fffdh
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        mov edx, 0fffeh
        ; Exact mapped bytes 66 21 51 24: and word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0fffbh
        ; Exact mapped bytes 66 21 41 24: and word ptr [ecx + 0x24], ax
        __asm _emit 0x66
        __asm _emit 0x21
        __asm _emit 0x41
        __asm _emit 0x24
        ; Exact mapped bytes 66 8B 51 24: mov dx, word ptr [ecx + 0x24]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x51
        __asm _emit 0x24
        mov eax, 0e4ffh
        ; Exact mapped bytes 66 23 D0: and dx, ax
        __asm _emit 0x66
        __asm _emit 0x23
        __asm _emit 0xd0
        mov eax, 400h
        ; Exact mapped bytes 66 0B D0: or dx, ax
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0xd0
        ; Exact mapped bytes 66 89 51 24: mov word ptr [ecx + 0x24], dx
        __asm _emit 0x66
        __asm _emit 0x89
        __asm _emit 0x51
        __asm _emit 0x24
        mov ecx, dword ptr [ecx + 1d0h]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx + 8]
        push esi
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        ; Exact mapped bytes A1 D0 45 A2 58: mov eax, dword ptr [0x58a245d0]
        __asm _emit 0xa1
        __asm _emit 0xd0
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        ; Exact mapped bytes 8B 0D 84 45 A2 58: mov ecx, dword ptr [0x58a24584]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        push eax
        mov esi, eax
        mov edi, ecx
        ; Exact mapped bytes E8 39 A8 03 00: call 0x58902ee0
        __asm _emit 0xe8
        __asm _emit 0x39
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        push esi
        mov ecx, edi
        ; Exact mapped bytes E8 A1 A8 03 00: call 0x58902f50
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0xa8
        __asm _emit 0x03
        __asm _emit 0x00
        ; Exact mapped bytes A1 84 45 A2 58: mov eax, dword ptr [0x58a24584]
        __asm _emit 0xa1
        __asm _emit 0x84
        __asm _emit 0x45
        __asm _emit 0xa2
        __asm _emit 0x58
        mov ecx, dword ptr [eax + 30h]
        mov edx, dword ptr [ecx]
        push 0
        push 64h
        push eax
        mov eax, dword ptr [edx + 18h]
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        ret
    }
}
