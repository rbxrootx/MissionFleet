// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58785270 .. +0x56 bytes.
extern "C" __declspec(naked) void FUN_58785270_58785270() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 9C FF FF FF: call 0x58785220
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp - 10h]
        cmp ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes 75 14: jne 0x587852a6
        __asm _emit 0x75
        __asm _emit 0x14
        mov edx, dword ptr [ebp - 0ch]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 75 0C: jne 0x587852a6
        __asm _emit 0x75
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 74h]
        ; Exact mapped bytes E8 8B 03 00 00: call 0x58785630
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 78h]
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 41 F8 FF FF: call 0x58784b00
        __asm _emit 0xe8
        __asm _emit 0x41
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
