// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5876BC90 .. +0x76 bytes.
extern "C" __declspec(naked) void FUN_5876bc90_5876BC90() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B1 59 D6 FF: call 0x584d1650
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x59
        __asm _emit 0xd6
        __asm _emit 0xff
        cmp eax, 40000000h
        ; Exact mapped bytes 75 5A: jne 0x5876bd00
        __asm _emit 0x75
        __asm _emit 0x5a
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 5f64h], 1
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 6170h], 0
        mov edx, dword ptr [ebp - 4]
        mov al, byte ptr [ebp + 8]
        mov byte ptr [edx + 5f68h], al
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 7E 2E: jle 0x5876bd00
        __asm _emit 0x7e
        __asm _emit 0x2e
        cmp dword ptr [ebp + 10h], 200h
        ; Exact mapped bytes 7F 25: jg 0x5876bd00
        __asm _emit 0x7f
        __asm _emit 0x25
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp - 4]
        add eax, 5f69h
        push eax
        ; Exact mapped bytes E8 9F 0B 0E 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x9f
        __asm _emit 0x0b
        __asm _emit 0x0e
        __asm _emit 0x00
        add esp, 0ch
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [ecx + 616ch], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
