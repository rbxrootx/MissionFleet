// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00438A20 .. +0x68 bytes.
extern "C" __declspec(naked) void FUN_00438a20_00438A20() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 74 4E: je 0x438a7f
        __asm _emit 0x74
        __asm _emit 0x4e
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 4]
        sub edx, dword ptr [ebp + 0ch]
        add edx, 1
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 75 08: jne 0x438a4e
        __asm _emit 0x75
        __asm _emit 0x08
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 17: jmp 0x438a65
        __asm _emit 0xeb
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 01 D2 02 00: call 0x465c60
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0xd2
        __asm _emit 0x02
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 0ch]
        sub ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ebp - 0ch]
        mov eax, dword ptr [edx + 4]
        sub eax, ecx
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ecx + 4], edx
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
