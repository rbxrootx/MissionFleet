// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5868DE30 .. +0x75 bytes.
extern "C" __declspec(naked) void FUN_5868de30_5868DE30() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0b4h]
        push ecx
        mov edx, dword ptr [ebp - 4]
        add edx, 0b4h
        push edx
        ; Exact mapped bytes 8B 0D 6C 06 96 58: mov ecx, dword ptr [0x5896066c]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0x6c
        __asm _emit 0x06
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 88 FC EB FF: call 0x5854dae0
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0xfc
        __asm _emit 0xeb
        __asm _emit 0xff
        nop
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 0b4h], 0
        ; Exact mapped bytes 7E 3C: jle 0x5868dea1
        __asm _emit 0x7e
        __asm _emit 0x3c
        mov ecx, dword ptr [ebp - 4]
        imul eax, dword ptr [ecx + 0b4h], 34h
        mov ecx, dword ptr [ebp - 4]
        cdq
        idiv dword ptr [ecx + 0b8h]
        sub eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes 79 07: jns 0x5868de88
        __asm _emit 0x79
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e4h]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 A0 19 E1 FF: call 0x5849f840
        __asm _emit 0xe8
        __asm _emit 0xa0
        __asm _emit 0x19
        __asm _emit 0xe1
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
