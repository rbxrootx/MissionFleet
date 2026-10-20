// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5884BE36 .. +0x177 bytes.
extern "C" __declspec(naked) void FUN_5884be36_5884BE36() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        mov esi, dword ptr [ebp + 20h]
        lea eax, [ebp - 1]
        push edi
        mov edi, dword ptr [ebp + 1ch]
        xor ebx, ebx
        inc ebx
        mov byte ptr [ebp - 1], 50h
        push ebx
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push ebx
        lea eax, [ebp - 1]
        mov byte ptr [ebp - 1], 4bh
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push ebx
        lea eax, [ebp + 1fh]
        mov byte ptr [ebp + 1fh], 5
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push ebx
        lea eax, [ebp + 1fh]
        mov byte ptr [ebp + 1fh], 6
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 1
        lea eax, [ebp + 1fh]
        xor ebx, ebx
        push eax
        push esi
        mov byte ptr [ebp + 1fh], bl
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 1
        lea eax, [ebp + 1fh]
        mov byte ptr [ebp + 1fh], bl
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 48h
        mov byte ptr [ebp + 1fh], bl
        lea eax, [ebp + 1fh]
        push 1
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 1
        lea eax, [ebp + 1fh]
        mov byte ptr [ebp + 1fh], bl
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ebx, dword ptr [ebp + 8]
        lea eax, [ebp + 1fh]
        push 1
        push eax
        push esi
        mov byte ptr [ebp + 1fh], bl
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 1
        lea eax, [ebp + 1fh]
        sar ebx, 8
        push eax
        push esi
        mov byte ptr [ebp + 1fh], bl
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, dword ptr [ebp + 8]
        mov byte ptr [ebp + 0bh], al
        lea eax, [ebp + 0bh]
        push 1
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov byte ptr [ebp + 0bh], bl
        lea eax, [ebp + 0bh]
        push 1
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ebx, dword ptr [ebp + 0ch]
        lea eax, [ebp + 0bh]
        add esp, 48h
        mov byte ptr [ebp + 0bh], bl
        push 1
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, ebx
        shr eax, 8
        mov byte ptr [ebp + 0bh], al
        lea eax, [ebp + 0bh]
        push 1
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, ebx
        shr eax, 10h
        mov byte ptr [ebp + 0bh], al
        lea eax, [ebp + 0bh]
        push 1
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 1
        lea eax, [ebp + 0bh]
        shr ebx, 18h
        push eax
        push esi
        mov byte ptr [ebp + 0bh], bl
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ebx, dword ptr [ebp + 10h]
        lea eax, [ebp + 0bh]
        push 1
        push eax
        push esi
        mov byte ptr [ebp + 0bh], bl
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, ebx
        shr eax, 8
        mov byte ptr [ebp + 0bh], al
        lea eax, [ebp + 0bh]
        push 1
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 48h
        mov eax, ebx
        shr eax, 10h
        mov byte ptr [ebp + 0bh], al
        lea eax, [ebp + 0bh]
        push 1
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        push 1
        lea eax, [ebp + 0bh]
        shr ebx, 18h
        push eax
        push esi
        mov byte ptr [ebp + 0bh], bl
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov ebx, dword ptr [ebp + 14h]
        lea eax, [ebp + 0bh]
        push 1
        push eax
        push esi
        mov byte ptr [ebp + 0bh], bl
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        mov eax, ebx
        shr eax, 8
        mov byte ptr [ebp + 0bh], al
        lea eax, [ebp + 0bh]
        push 1
        push eax
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 30h
        test ebx, ebx
        ; Exact mapped bytes 74 13: je 0x5884bfa4
        __asm _emit 0x74
        __asm _emit 0x13
        push ebx
        push dword ptr [ebp + 18h]
        push esi
        ; Exact mapped bytes FF D7: call edi
        __asm _emit 0xff
        __asm _emit 0xd7
        add esp, 0ch
        cmp eax, ebx
        ; Exact mapped bytes 74 05: je 0x5884bfa4
        __asm _emit 0x74
        __asm _emit 0x05
        push 0ah
        pop eax
        ; Exact mapped bytes EB 02: jmp 0x5884bfa6
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
