// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00510CC8 .. +0x41 bytes.
extern "C" __declspec(naked) void FID_conflict__GetCheckedRadioButton_CWnd__QAEHHH_Z_00510CC8() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x510ce2
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7F 17: jg 0x510d01
        __asm _emit 0x7f
        __asm _emit 0x17
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 FD 53 FC FF: call 0x4d60f3
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x53
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 05: je 0x510cff
        __asm _emit 0x74
        __asm _emit 0x05
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 04: jmp 0x510d03
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB D8: jmp 0x510cd9
        __asm _emit 0xeb
        __asm _emit 0xd8
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
