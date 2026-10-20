// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004CF75C .. +0x46 bytes.
extern "C" __declspec(naked) void _GetCurrentMessage_CWnd__KGPBUtagMSG__XZ_004CF75C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov ecx, 686d24h
        ; Exact mapped bytes E8 C4 DE 06 00: call 0x53d630
        __asm _emit 0xe8
        __asm _emit 0xc4
        __asm _emit 0xde
        __asm _emit 0x06
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes FF 15 48 BF 68 00: call dword ptr [0x68bf48]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x48
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 44h], eax
        ; Exact mapped bytes FF 15 4C BF 68 00: call dword ptr [0x68bf4c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x4c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        lea ecx, [ebp - 0ch]
        ; Exact mapped bytes E8 2F 27 06 00: call 0x531eb9
        __asm _emit 0xe8
        __asm _emit 0x2f
        __asm _emit 0x27
        __asm _emit 0x06
        __asm _emit 0x00
        mov edx, dword ptr [eax]
        mov eax, dword ptr [eax + 4]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 48h], edx
        mov dword ptr [ecx + 4ch], eax
        mov eax, dword ptr [ebp - 4]
        add eax, 34h
        mov esp, ebp
        pop ebp
        ret
    }
}
