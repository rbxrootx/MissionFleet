// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004B6A72 .. +0x7A bytes.
extern "C" __declspec(naked) void FID_conflict__FillInToolInfo_CToolTipCtrl__QBEXAAUtagTOOLINFOA__PAVCWnd__I_Z_004B6A72() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 28h
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 38 EE FA FF: call 0x4658c0
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0xee
        __asm _emit 0xfa
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], 28h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 10 4B 07 00: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0x10
        __asm _emit 0x4b
        __asm _emit 0x07
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 25: jne 0x4b6aca
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 A4 BF 68 00: call dword ptr [0x68bfa4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xa4
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes EB 1C: jmp 0x4b6ae6
        __asm _emit 0xeb
        __asm _emit 0x1c
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [edx + 8], eax
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 4], 0
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx + 0ch], eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
