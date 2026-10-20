// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883A2AC .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_5883a2ac_5883A2AC() {
    __asm {
        push ebp
        mov ebp, esp
        or eax, 0ffffffffh
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        div dword ptr [ebp + 10h]
        cmp ecx, eax
        ; Exact mapped bytes 76 05: jbe 0x5883a2c3
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes E9 F8 6C 01 00: jmp 0x58850fbb
        __asm _emit 0xe9
        __asm _emit 0xf8
        __asm _emit 0x6c
        __asm _emit 0x01
        __asm _emit 0x00
        imul ecx, dword ptr [ebp + 10h]
        cmp ecx, 1000h
        ; Exact mapped bytes 72 1C: jb 0x5883a2eb
        __asm _emit 0x72
        __asm _emit 0x1c
        mov eax, dword ptr [ebp + 8]
        test al, 1fh
        ; Exact mapped bytes 75 E8: jne 0x5883a2be
        __asm _emit 0x75
        __asm _emit 0xe8
        mov ecx, dword ptr [eax - 4]
        cmp ecx, eax
        ; Exact mapped bytes 73 E1: jae 0x5883a2be
        __asm _emit 0x73
        __asm _emit 0xe1
        sub eax, ecx
        cmp eax, 4
        ; Exact mapped bytes 72 DA: jb 0x5883a2be
        __asm _emit 0x72
        __asm _emit 0xda
        cmp eax, 23h
        ; Exact mapped bytes 76 05: jbe 0x5883a2ee
        __asm _emit 0x76
        __asm _emit 0x05
        ; Exact mapped bytes EB D3: jmp 0x5883a2be
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp + 8]
        push ecx
        ; Exact mapped bytes E8 8D 6D FF FF: call 0x58831081
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0x6d
        __asm _emit 0xff
        __asm _emit 0xff
        pop ecx
        pop ebp
        ret
    }
}
