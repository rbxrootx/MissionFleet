// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438690 .. +0x93 bytes.
extern "C" __declspec(naked) void FUN_00438690_00438690() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        push edi
        mov dword ptr [ebp - 18h], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 8], edx
        ; Exact mapped bytes 76 0D: jbe 0x4386b7
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 EC D6 FF FF: call 0x435da0
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0xd6
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov edi, dword ptr [ebp + 0ch]
        or ecx, 0ffffffffh
        xor eax, eax
        ; Exact mapped bytes F2 AE: repne scasb al, byte ptr es:[edi]
        __asm _emit 0xf2
        __asm _emit 0xae
        not ecx
        add ecx, -1
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 18h]
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        mov eax, 0fffffffeh
        sub eax, dword ptr [ebp - 4]
        cmp edx, eax
        ; Exact mapped bytes 76 0D: jbe 0x4386ed
        __asm _emit 0x76
        __asm _emit 0x0d
        push 670a18h
        ; Exact mapped bytes E8 16 D9 FF FF: call 0x436000
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xd9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov ecx, dword ptr [ebp - 18h]
        mov edx, dword ptr [ecx]
        add edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], edx
        mov al, byte ptr [ebp - 10h]
        mov byte ptr [ebp - 0ch], al
        lea ecx, [ebp - 0ch]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        add edx, dword ptr [ebp - 4]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 37 02 01 00: call 0x448950
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x02
        __asm _emit 0x01
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 18h]
        pop edi
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
