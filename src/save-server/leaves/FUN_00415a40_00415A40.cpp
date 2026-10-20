// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00415A40 .. +0xB6 bytes.
extern "C" __declspec(naked) void FUN_00415a40_00415A40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 74h
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 74h]
        mov ecx, 1dh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 4], ecx
        mov al, byte ptr [ebp - 30h]
        and al, 0fh
        or al, 10h
        mov byte ptr [ebp - 30h], al
        mov cl, byte ptr [ebp - 30h]
        and cl, 0f0h
        or cl, 1
        mov byte ptr [ebp - 30h], cl
        mov dword ptr [ebp - 2ch], 0ffffffffh
        mov esi, esp
        mov edx, dword ptr [ebp + 8]
        push edx
        push 63310ch
        lea eax, [ebp - 28h]
        push eax
        ; Exact mapped bytes FF 15 CC BF 68 00: call dword ptr [0x68bfcc]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xcc
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        add esp, 0ch
        cmp esi, esp
        ; Exact mapped bytes E8 57 F3 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 10h], 78h
        ; Exact mapped bytes 0F BF 0D 18 04 67 00: movsx ecx, word ptr [0x670418]
        __asm _emit 0x0f
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x18
        __asm _emit 0x04
        __asm _emit 0x67
        __asm _emit 0x00
        add ecx, 7
        push ecx
        push 670388h
        push 78h
        ; Exact mapped bytes E8 1C 66 0B 00: call 0x4cc0d3
        __asm _emit 0xe8
        __asm _emit 0x1c
        __asm _emit 0x66
        __asm _emit 0x0b
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 34h], eax
        mov edx, dword ptr [ebp - 34h]
        mov dword ptr [ebp - 8], edx
        push 78h
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        ; Exact mapped bytes E8 2E F8 04 00: call 0x465300
        __asm _emit 0xe8
        __asm _emit 0x2e
        __asm _emit 0xf8
        __asm _emit 0x04
        __asm _emit 0x00
        add esp, 0ch
        lea edx, [ebp - 30h]
        push edx
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E3 BC FE FF: call 0x4017c6
        __asm _emit 0xe8
        __asm _emit 0xe3
        __asm _emit 0xbc
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        add esp, 74h
        cmp ebp, esp
        ; Exact mapped bytes E8 00 F3 04 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0xf3
        __asm _emit 0x04
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
