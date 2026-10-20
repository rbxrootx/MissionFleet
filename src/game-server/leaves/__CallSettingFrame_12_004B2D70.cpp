// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B2D70 .. +0x4C bytes.
extern "C" __declspec(naked) void __CallSettingFrame_12_004B2D70() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 4
        push ebx
        push ecx
        mov eax, dword ptr [ebp + 0ch]
        add eax, 0ch
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp + 8]
        push ebp
        push dword ptr [ebp + 10h]
        mov ecx, dword ptr [ebp + 10h]
        mov ebp, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 6A 62 FF FF: call 0x4a8ffd
        __asm _emit 0xe8
        __asm _emit 0x6a
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        push esi
        push edi
        ; Exact mapped bytes FF D0: call eax
        __asm _emit 0xff
        __asm _emit 0xd0
        pop edi
        pop esi
        mov ebx, ebp
        pop ebp
        mov ecx, dword ptr [ebp + 10h]
        push ebp
        mov ebp, ebx
        cmp ecx, 100h
        ; Exact mapped bytes 75 05: jne 0x4b2daf
        __asm _emit 0x75
        __asm _emit 0x05
        mov ecx, 2
        push ecx
        ; Exact mapped bytes E8 48 62 FF FF: call 0x4a8ffd
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x62
        __asm _emit 0xff
        __asm _emit 0xff
        pop ebp
        pop ecx
        pop ebx
        leave
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
