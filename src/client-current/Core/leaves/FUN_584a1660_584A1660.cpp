// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584A1660 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_584a1660_584A1660() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 48 0D: movsx ecx, byte ptr [eax + 0xd]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x48
        __asm _emit 0x0d
        test ecx, ecx
        ; Exact mapped bytes 75 32: jne 0x584a16a4
        __asm _emit 0x75
        __asm _emit 0x32
        mov edx, dword ptr [ebp + 0ch]
        mov eax, dword ptr [edx + 8]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DB FF FF FF: call 0x584a1660
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        push edx
        lea eax, [ebp + 0ch]
        push eax
        ; Exact mapped bytes E8 3E 09 00 00: call 0x584a1fd0
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 D1 02 00 00: call 0x584a1970
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0x02
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        ; Exact mapped bytes EB C3: jmp 0x584a1667
        __asm _emit 0xeb
        __asm _emit 0xc3
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
