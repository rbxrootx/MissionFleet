// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040EA60 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_0040ea60_0040EA60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 44ch
        push ebx
        push esi
        push edi
        lea edi, [ebp - 44ch]
        mov ecx, 113h
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        lea eax, [ebp + 0ch]
        mov dword ptr [ebp - 40ch], eax
        mov esi, esp
        mov ecx, dword ptr [ebp - 40ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        lea eax, [ebp - 400h]
        push eax
        ; Exact mapped bytes FF 15 C8 BF 68 00: call dword ptr [0x68bfc8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xc8
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 48 63 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x63
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 404h], eax
        mov dword ptr [ebp - 40ch], 0
        mov esi, esp
        push 0
        lea ecx, [ebp - 408h]
        push ecx
        mov edx, dword ptr [ebp - 404h]
        push edx
        lea eax, [ebp - 400h]
        push eax
        ; Exact mapped bytes 8B 0D 98 4B 68 00: mov ecx, dword ptr [0x684b98]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x98
        __asm _emit 0x4b
        __asm _emit 0x68
        __asm _emit 0x00
        push ecx
        ; Exact mapped bytes FF 15 D4 B7 68 00: call dword ptr [0x68b7d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0xb7
        __asm _emit 0x68
        __asm _emit 0x00
        cmp esi, esp
        ; Exact mapped bytes E8 0B 63 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0x0b
        __asm _emit 0x63
        __asm _emit 0x05
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 404h]
        pop edi
        pop esi
        pop ebx
        add esp, 44ch
        cmp ebp, esp
        ; Exact mapped bytes E8 F5 62 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xf5
        __asm _emit 0x62
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
