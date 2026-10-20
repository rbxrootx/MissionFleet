// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58853665 .. +0x9C bytes.
extern "C" __declspec(naked) void FUN_58853665_58853665() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 464h
        ; Exact mapped bytes A1 40 60 90 58: mov eax, dword ptr [0x58906040]
        __asm _emit 0xa1
        __asm _emit 0x40
        __asm _emit 0x60
        __asm _emit 0x90
        __asm _emit 0x58
        xor eax, ebp
        mov dword ptr [ebp - 4], eax
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov eax, dword ptr [esi]
        mov edi, dword ptr [esi + 4]
        mov ebx, dword ptr [eax]
        push ebx
        ; Exact mapped bytes E8 C6 AB 01 00: call 0x5886e252
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0xab
        __asm _emit 0x01
        __asm _emit 0x00
        mov byte ptr [ebp - 464h], al
        mov eax, dword ptr [esi]
        pop ecx
        lea ecx, [ebp - 45ch]
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 460h], eax
        mov eax, dword ptr [esi + 10h]
        push dword ptr [eax]
        mov eax, dword ptr [esi + 0ch]
        push dword ptr [esi + 4]
        push dword ptr [eax]
        mov eax, dword ptr [esi + 8]
        push dword ptr [eax + 4]
        push dword ptr [eax]
        lea eax, [ebp - 460h]
        push eax
        ; Exact mapped bytes E8 90 FE FF FF: call 0x58853554
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        and dword ptr [ebp - 0ch], 0
        lea ecx, [ebp - 45ch]
        ; Exact mapped bytes E8 A0 02 00 00: call 0x58853973
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        lea ecx, [ebp - 420h]
        mov esi, eax
        ; Exact mapped bytes E8 47 FF FF FF: call 0x58853627
        __asm _emit 0xe8
        __asm _emit 0x47
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        push edi
        push ebx
        push dword ptr [ebp - 464h]
        ; Exact mapped bytes E8 10 AC 01 00: call 0x5886e2fd
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0xac
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        add esp, 0ch
        mov eax, esi
        xor ecx, ebp
        pop edi
        pop esi
        pop ebx
        ; Exact mapped bytes E8 51 D9 FD FF: call 0x58831050
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xd9
        __asm _emit 0xfd
        __asm _emit 0xff
        leave
        ret
    }
}
