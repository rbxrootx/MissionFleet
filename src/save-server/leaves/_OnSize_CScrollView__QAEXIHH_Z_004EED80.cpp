// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004EED80 .. +0x55 bytes.
extern "C" __declspec(naked) void _OnSize_CScrollView__QAEXIHH_Z_004EED80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A6 E5 03 00: call 0x52d343
        __asm _emit 0xe8
        __asm _emit 0xa6
        __asm _emit 0xe5
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 0ch]
        cmp dword ptr [eax + 40h], -1
        ; Exact mapped bytes 75 21: jne 0x4eedc7
        __asm _emit 0x75
        __asm _emit 0x21
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 44h]
        mov eax, dword ptr [ecx + 48h]
        mov dword ptr [ebp - 8], edx
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 2C F5 FF FF: call 0x4ee2f1
        __asm _emit 0xe8
        __asm _emit 0x2c
        __asm _emit 0xf5
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 08: jmp 0x4eedcf
        __asm _emit 0xeb
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 31 04 00 00: call 0x4ef200
        __asm _emit 0xe8
        __asm _emit 0x31
        __asm _emit 0x04
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
