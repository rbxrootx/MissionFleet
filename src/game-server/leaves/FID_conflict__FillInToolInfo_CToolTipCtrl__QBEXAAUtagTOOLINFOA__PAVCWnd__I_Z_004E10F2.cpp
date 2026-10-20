// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004E10F2 .. +0x7A bytes.
extern "C" __declspec(naked) void FID_conflict__FillInToolInfo_CToolTipCtrl__QBEXAAUtagTOOLINFOA__PAVCWnd__I_Z_004E10F2() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        push 28h
        push 0
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 68 82 FC FF: call 0x4a9370
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x82
        __asm _emit 0xfc
        __asm _emit 0xff
        add esp, 0ch
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx], 28h
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 30 AA 05 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xaa
        __asm _emit 0x05
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp + 10h], 0
        ; Exact mapped bytes 75 25: jne 0x4e114a
        __asm _emit 0x75
        __asm _emit 0x25
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes FF 15 D4 26 5E 00: call dword ptr [0x5e26d4]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xd4
        __asm _emit 0x26
        __asm _emit 0x5e
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 8], eax
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 4], 1
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [eax + 0ch], ecx
        ; Exact mapped bytes EB 1C: jmp 0x4e1166
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
