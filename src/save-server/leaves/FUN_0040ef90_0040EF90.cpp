// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0040EF90 .. +0xC2 bytes.
extern "C" __declspec(naked) void FUN_0040ef90_0040EF90() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 58aabch
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        sub esp, 22ch
        push ebx
        push esi
        push edi
        push ecx
        lea edi, [ebp - 238h]
        mov ecx, 8bh
        mov eax, 0cccccccch
        ; Exact mapped bytes F3 AB: rep stosd dword ptr es:[edi], eax
        __asm _emit 0xf3
        __asm _emit 0xab
        pop ecx
        mov dword ptr [ebp - 10h], ecx
        push 0
        ; Exact mapped bytes E8 E6 AE 03 00: call 0x449eb5
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0xae
        __asm _emit 0x03
        __asm _emit 0x00
        add esp, 4
        push 0
        ; Exact mapped bytes E8 67 D5 01 00: call 0x42c540
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xd5
        __asm _emit 0x01
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 BF FC 12 00: call 0x53eca0
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xfc
        __asm _emit 0x12
        __asm _emit 0x00
        push 0
        lea ecx, [ebp - 1f0h]
        ; Exact mapped bytes E8 02 2B FF FF: call 0x401af0
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x2b
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        lea ecx, [ebp - 1f0h]
        mov dword ptr [eax + 1ch], ecx
        lea ecx, [ebp - 1f0h]
        ; Exact mapped bytes E8 4C F6 0B 00: call 0x4ce658
        __asm _emit 0xe8
        __asm _emit 0x4c
        __asm _emit 0xf6
        __asm _emit 0x0b
        __asm _emit 0x00
        mov dword ptr [ebp - 1f4h], eax
        mov dword ptr [ebp - 1f8h], 0
        mov dword ptr [ebp - 4], 0ffffffffh
        lea ecx, [ebp - 1f0h]
        ; Exact mapped bytes E8 38 23 FF FF: call 0x401366
        __asm _emit 0xe8
        __asm _emit 0x38
        __asm _emit 0x23
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 1f8h]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        add esp, 238h
        cmp ebp, esp
        ; Exact mapped bytes E8 A2 5D 05 00: call 0x464df0
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x5d
        __asm _emit 0x05
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
