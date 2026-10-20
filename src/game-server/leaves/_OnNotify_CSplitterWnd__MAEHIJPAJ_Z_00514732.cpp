// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00514732 .. +0x4F bytes.
extern "C" __declspec(naked) void _OnNotify_CSplitterWnd__MAEHIJPAJ_Z_00514732() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 10h]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E7 02 FE FF: call 0x4f4a34
        __asm _emit 0xe8
        __asm _emit 0xe7
        __asm _emit 0x02
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x514758
        __asm _emit 0x74
        __asm _emit 0x07
        mov eax, 1
        ; Exact mapped bytes EB 23: jmp 0x51477b
        __asm _emit 0xeb
        __asm _emit 0x23
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        push 4eh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D8 03 FE FF: call 0x4f4b42
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0x03
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 68 74 02 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0x68
        __asm _emit 0x74
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 10h]
        mov dword ptr [edx], eax
        mov eax, 1
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
