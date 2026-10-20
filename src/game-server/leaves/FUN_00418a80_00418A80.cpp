// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00418A80 .. +0x73 bytes.
extern "C" __declspec(naked) void FUN_00418a80_00418A80() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0fh
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 10h]
        xor ecx, ecx
        mov cl, byte ptr [eax + 55h]
        mov dword ptr [ebp - 0ch], ecx
        lea edx, [ebp - 4]
        push edx
        lea eax, [ebp - 8]
        push eax
        lea ecx, [ebp - 0ch]
        push ecx
        ; Exact mapped bytes E8 F9 AC FE FF: call 0x4037c0
        __asm _emit 0xe8
        __asm _emit 0xf9
        __asm _emit 0xac
        __asm _emit 0xfe
        __asm _emit 0xff
        add esp, 0ch
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x418ad7
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 0E: jmp 0x418ae5
        __asm _emit 0xeb
        __asm _emit 0x0e
        mov edx, dword ptr [ebp - 10h]
        mov byte ptr [edx + 55h], 0
        mov dword ptr [ebp - 14h], 0
        add esp, 14h
        cmp ebp, esp
        ; Exact mapped bytes E8 F1 FC 08 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xf1
        __asm _emit 0xfc
        __asm _emit 0x08
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
